


#파일 불러오기
SELECT * FROM files;

CREATE TABLE `book` (
	`idx` INT NOT NULL AUTO_INCREMENT,
	`title` VARCHAR(50) NULL DEFAULT NULL,
	`desc` TEXT NULL,
	`cata` VARCHAR(50) NULL DEFAULT NULL,
	PRIMARY KEY (`idx`)
)

INSERT INTO `ghpark`.`book` 
(`idx`, `title`, `desc`, `cata`) 
VALUES 
(2, 'JAVAProgramming', 'JAVA공부할수 있는데', 'aa.png');
#테이블생성
CREATE TABLE files1(
	idx INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
	ko VARCHAR(255),
	en VARCHAR(255),
	filename VARCHAR(255) NULL,
	`int` DATETIME
);
#삭제하기
#DROP TABLE files;

#파일안에 넣기
INSERT INTO files
(ko,en,filename,regdate)
VALUES
('안녕하세요','hello','bb.mp3',NOW());


SELECT *FROM book;
ORDER BY idx DESC;


DROP TABLE freeboard;
CREATE TABLE `freeboard` (
   `idx` INT NOT NULL AUTO_INCREMENT,
   `title` VARCHAR(50) NULL DEFAULT NULL,
   `content` TEXT NULL,
   `writer` VARCHAR(50) NULL DEFAULT NULL,
   `hits` INT NULL DEFAULT 0,
   `regdate` DATETIME NULL,
   PRIMARY KEY (`idx`)
)
COLLATE='utf8mb3_general_ci'
;
INSERT INTO `ghpark`.`freeboard` (`idx`, `title`, `content`, `writer`,`regdate`)
VALUES (10, '제목제목', '내요내요내욘요내요', '작성자',NOW());
SELECT * FROM freeboard 
ORDER BY idx DESC
LIMIT 3,3;
#max 최대 min 최소 count 행 갯수
SELECT min(idx) from freeboard;
SELECT COUNT(idx) AS cnt FROM freeboard;

SELECT * FROM freeboard WHERE idx=13;