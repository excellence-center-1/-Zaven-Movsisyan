create database store_system;

\c store_systeml;

create table good(good_id serial PRIMARY KEY, good_name varchar(50) unique not null, good_price_to_buy int not null, good_price_to_sell int not null);

create table store(store_id serial PRIMARY KEY, store_name varchar(50) unique not  null, store_budget int not null);

create table patient(patient_id serial PRIMARY KEY, patient_name varchar(30) nor null, patient_phone varchar(30) unique not null, patient_balance int not bull);

create table producer(producer_id serial PRIMARY KEY, producer_name varchar (50) unique NOT NULL, producer_email varchar (30) unique not null);

insert into producer (producer_name, producer_email)
values ('Grand_candy', 'grand_company@gmail.com'),
	('Shant', 'shant@gmail.com');

insert into good (good_name, good_price_to_buy, good_price_to_sell)
values ('Sweet', 100, 200),
        ('Ice-cream', 120, 280),
	('Bread', 150, 200);

insert into patient (patient_name, patient_phone, patient_balance)
values ('Steeve', 132456, 20000),
        ('Isahac', 654321, 28000),
        ('Nare', 123654, 100800);


insert into store (store_name, store_budget)
values ('Proshyan', 2000000),
        ('Vitamin', 3210220);



