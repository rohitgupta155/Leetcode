# Write your MySQL query statement below
select id,count(*) as num from (select r1.requester_id as id from requestaccepted r1
union all
select r2.accepter_id as id from requestaccepted r2)as a group by id order by num desc limit 1;