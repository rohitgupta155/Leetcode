# Write your MySQL query statement below
select user_id, round(count(case when action="confirmed" then 1 end)/count(*),2) as confirmation_rate from confirmations group by user_id 
UNION
select user_id, 0.00 as confirmation_rate from signups where user_id not in(select user_id from confirmations);