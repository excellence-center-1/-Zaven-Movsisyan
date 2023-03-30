create database store;
/c store


-- Cretion of table 'brand' with id and name.
create table brand(
    id serial primary key, 
    name varchar(50) unique not null
);

insert into brand (name)
    values ('best_food'),
            ('fresh_food');


-- Creation of table 'store' with id name and address.
create table store(
    id serial primary key,
    name varchar(50) unique not null,
    address varchar(50) unique not null
);

insert into store (name, addres)
    values ('Vitamin', 'Tigran Great'),
            ('Proshyan', 'Bangladesh');


-- Creation of table current_prizes with id, delivery prize, sale_prize and date.
create table current_prizes(
    id int not null,
    sale = int not null,
    delivery = int not null,
    prize_date = date,
    foreign key (id)
       references product (id)
);

insert into current_prizes (sale, delivery, )


-- Creation of table 'product' with id, name, brand name, del.prize, sale prize.
create table product(
    id serial primary key,
    name varchar(50) unique not null,
    brand_name varchar(50) uniqe not null,
    delivery_prize int not null,
    sale_prize int not null,
    foreign key (brand_name)
        references brand (name)
    foreign key (delivery_prize)
        references current_prizes (delivery)   
    foreign key (sale_prize)
        references current_prizes (sale)   
)


-- Creation of table costumer with id, name, address and budget.
create table costumer(
    id serial primary key,
    name varchar(50) not null,
    address varchar(50) not null,
    budget int not null
)


-- Creation of table order with id, store_id, costumer_id, product_id.
create table order(
    id serial primary key,
    store_id int,
    product_id int,
    costumer_id int,
    order_date date,
    foreign key (store_id)
        references store (id)
    foreign key (product_id)
        references product (id)
    foreign key (costumer_d)
        references costumer (id)   

)
