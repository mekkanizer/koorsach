INSERT INTO PR2_ZAPROS2 ( n, fam, name, Возраст, Курс, pol )
SELECT student.n, student.fam, student.name, Year(Now())-Year([dr]) AS Возраст, Right(Left([N_gr],3),1) AS Курс, student.pol
FROM student
WHERE (((Year(Now())-Year([dr]))<18) AND ((Right(Left([N_gr],3),1))=1 Or (Right(Left([N_gr],3),1))=2) AND ((student.pol)="ж"));

INSERT INTO dbo.sotr ( n, Фамилия, Имя, Отчество, Пол, Дата_р, телефон, образование, брак )
VALUES (55, 'Туманенко', 'Дмитрий', 'Роландович', 'м', '1996-8-7', 6564756, 'среднее', 0);