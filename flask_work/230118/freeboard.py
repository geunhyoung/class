from flask import Blueprint,render_template,request,url_for,redirect
import config

prefix= 'freeboard'

app= Blueprint(prefix,__name__,url_prefix=f'/{prefix}')


@app.route("view")
def view():
    idx=request.args.get('idx')

    connection= config.connect()
    cursor=connection.cursor()
    sql= f'select * from freeboard where idx = {idx}'
    cursor.execute(sql)
    res=cursor.fetchall()
    print(res)
    config.close(connection)
    
    return render_template('freeboard/view.html',res=res)


@app.route("insertform")
def insertform():
    return render_template('freeboard/insertform.html')

@app.route("insertproc")
def insertproc():
    content =request.args.get('content')
    title =request.args.get('title')
    writer =request.args.get('writer')

    connection= config.connect()
    cursor=connection.cursor()
    sql= f"""
            insert into freeboard 
            (title,content,writer,regdate) 
            values
            ('{title}','{content}','{writer}',now())
        """
    cursor.execute(sql)
    connection.commit()
    config.close(connection)

    return redirect('/freeboard/select')

@app.route("select")
def select():
    pageNum= request.args.get('pageNum')
    print(pageNum)
 
    if pageNum == None:
        pageNum=1
    else:
        pageNum=int(pageNum)

    connection= config.connect()
    cursor=connection.cursor()
    sql= f'select * from freeboard order BY idx DESC LIMIT {((pageNum -1)*3)},3'
    cursor.execute(sql)
    res=cursor.fetchall()
    config.close(connection)

    connection= config.connect()
    cursor=connection.cursor()
    sql= f'select count(idx) from freeboard'
    cursor.execute(sql)
    cnt=cursor.fetchall()
    rowcnt= int(cnt[0][0])
    pagecnt=rowcnt//3
    pageCnt=pagecnt if rowcnt%3==0 else pagecnt+1
    config.close(connection)

    return render_template(f'{prefix}/select.html',res=res,pageCnt=pageCnt,pageNum=pageNum)
