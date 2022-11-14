# Write your MySQL query statement below
select * from Cinema where mod(id,2)=1 && description NOT LIKE "boring" order by rating desc;