pragma foreign_keys = off;
begin transaction;
CREATE TABLE details(

	id INTEGER NOT NULL PRIMARY KEY,
	name text,
	uname TEXT ,
	upass TEXT ,
	email text ,
	link text ,
	details ,
	contact 
);



commit;

