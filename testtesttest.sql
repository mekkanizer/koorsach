
CREATE TABLE ������
(
	�����_������ integer  NOT NULL ,
	���_������ varchar(20)  NULL ,
	�����_����� integer  NULL ,
	�����_��������� integer  NULL ,
	�����_����� integer  NULL 
)
go


ALTER TABLE ������
	ADD CONSTRAINT XPK������ PRIMARY KEY  CLUSTERED (�����_������ ASC)
go


CREATE TABLE ���������
(
	��� varchar(20)  NULL ,
	������� varchar(20)  NULL ,
	�������� varchar(20)  NULL ,
	����_�������� datetime  NULL ,
	��� varchar(20)  NULL ,
	�����_�������� integer  NULL ,
	�����_�������� integer  NULL ,
	�����_��������� integer  NOT NULL 
)
go


ALTER TABLE ���������
	ADD CONSTRAINT XPK��������� PRIMARY KEY  CLUSTERED (�����_��������� ASC)
go


CREATE TABLE ������������
(
	����� varchar(20)  NOT NULL ,
	������ varbinary()  NULL 
)
go


ALTER TABLE ������������
	ADD CONSTRAINT XPK������������ PRIMARY KEY  CLUSTERED (����� ASC)
go


CREATE TABLE �����
(
	�����_����� integer  NOT NULL ,
	����_������ datetime  NULL ,
	����_������� datetime  NULL ,
	�����_����������� varchar(20)  NULL ,
	�����_���������� varchar(20)  NULL ,
	�����_�������� integer  NULL ,
	�����_������ datetime  NULL ,
	�����_������� datetime  NULL 
)
go


ALTER TABLE �����
	ADD CONSTRAINT XPK����� PRIMARY KEY  CLUSTERED (�����_����� ASC)
go


CREATE TABLE ��������
(
	�����_�������� integer  NOT NULL ,
	���_�������� varchar(20)  NULL ,
	���_��_���� integer  NULL 
)
go


ALTER TABLE ��������
	ADD CONSTRAINT XPK�������� PRIMARY KEY  CLUSTERED (�����_�������� ASC)
go



ALTER TABLE ������
	ADD CONSTRAINT  R_4 FOREIGN KEY (�����_���������) REFERENCES ���������(�����_���������)
		ON DELETE NO ACTION
		ON UPDATE NO ACTION
go

ALTER TABLE ������
	ADD CONSTRAINT  R_6 FOREIGN KEY (�����_�����) REFERENCES �����(�����_�����)
		ON DELETE NO ACTION
		ON UPDATE NO ACTION
go



ALTER TABLE �����
	ADD CONSTRAINT  R_1 FOREIGN KEY (�����_��������) REFERENCES ��������(�����_��������)
		ON DELETE NO ACTION
		ON UPDATE NO ACTION
go

