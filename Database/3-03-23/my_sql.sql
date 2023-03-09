CREATE DATABASE db1;

CREATE USER 'user1'@'localhost' IDENTIFIED BY '1';
CREATE USER 'user2'@'localhost' IDENTIFIED BY '2';

GRANT ALL ON my_db.* TO user1@localhost;
GRANT SELECT ON my_db.* TO user2@localhost;

ALTER USER 'user1'@'localhost' IDENTIFIED BY 'New-1';
ALTER USER 'user2'@'localhost' IDENTIFIED BY 'New-2';

