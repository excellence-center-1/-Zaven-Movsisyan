create database store;
/c store


-- Cretion of table 'brand' with id and name.
create table brand(
    id serial primary key, 
    name varchar(50) unique not null
);

insert into brand (name)
    values ('best_food'),
            ('fresh_food')


create store(
    id serial primary key,
    name varchar(50) unique not null,
    address varchar(50) unique not null
);

create current_prizes(
    id int not null,
    sale = int not null,
    delivery= int not null,
    prize_date = date,
    foreign key (id)
       references product (id)
)


-- Creation if table 'product'
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


create costumer(
    id serial primary key,
    name varchar(50) not null,
    address varchar(50) not null,
    budget int not null
)


create order(
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
