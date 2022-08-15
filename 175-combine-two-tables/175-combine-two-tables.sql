/* Write your PL/SQL query statement below */
select firstname , lastname , city , state  from person p LEFT OUTER JOIN ADDRESS A on p.personid=a.personid;