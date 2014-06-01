/*This SQL query was generated using ERWin Data Modeler.
It helps to create a Microsoft SQL Server database corresponding to this (shitty) C++ Builder code.
Run this query in a blank database, edit the ConnectionString in the project's ADOConnection, and you're good to go.
Test it, break it, report me any issues. Thanks.*/

CREATE TABLE Билеты
(
	Номер_билета integer  NOT NULL ,
	Тип_билета varchar(20)  NULL ,
	Номер_места integer  NULL ,
	Номер_пассажира integer  NULL ,
	Номер_рейса integer  NULL 
)
go


ALTER TABLE Билеты
	ADD CONSTRAINT XPKБилеты PRIMARY KEY  CLUSTERED (Номер_билета ASC)
go


CREATE TABLE Пассажиры
(
	Имя varchar(20)  NULL ,
	Фамилия varchar(20)  NULL ,
	Отчество varchar(20)  NULL ,
	Дата_Рождения datetime  NULL ,
	Пол varchar(20)  NULL ,
	Серия_паспорта integer  NULL ,
	Номер_паспорта integer  NULL ,
	Номер_пассажира integer  NOT NULL 
)
go


ALTER TABLE Пассажиры
	ADD CONSTRAINT XPKПассажиры PRIMARY KEY  CLUSTERED (Номер_пассажира ASC)
go


CREATE TABLE Рейсы
(
	Номер_рейса integer  NOT NULL ,
	Дата_вылета datetime  NULL ,
	Дата_прилета datetime  NULL ,
	Пункт_отправления varchar(20)  NULL ,
	Пункт_назначения varchar(20)  NULL ,
	Номер_самолета integer  NULL ,
	Время_вылета datetime  NULL ,
	Время_прилета datetime  NULL 
)
go


ALTER TABLE Рейсы
	ADD CONSTRAINT XPKРейсы PRIMARY KEY  CLUSTERED (Номер_рейса ASC)
go


CREATE TABLE Самолеты
(
	Номер_самолета integer  NOT NULL ,
	Тип_самолета varchar(20)  NULL ,
	Кол_во_мест integer  NULL 
)
go


ALTER TABLE Самолеты
	ADD CONSTRAINT XPKСамолеты PRIMARY KEY  CLUSTERED (Номер_самолета ASC)
go



ALTER TABLE Билеты
	ADD CONSTRAINT  R_4 FOREIGN KEY (Номер_пассажира) REFERENCES Пассажиры(Номер_пассажира)
		ON DELETE NO ACTION
		ON UPDATE NO ACTION
go

ALTER TABLE Билеты
	ADD CONSTRAINT  R_6 FOREIGN KEY (Номер_рейса) REFERENCES Рейсы(Номер_рейса)
		ON DELETE NO ACTION
		ON UPDATE NO ACTION
go



ALTER TABLE Рейсы
	ADD CONSTRAINT  R_1 FOREIGN KEY (Номер_самолета) REFERENCES Самолеты(Номер_самолета)
		ON DELETE NO ACTION
		ON UPDATE NO ACTION
go