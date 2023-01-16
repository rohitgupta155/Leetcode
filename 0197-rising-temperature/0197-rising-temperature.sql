# Write your MySQL query statement below
select p1.id from weather p1, weather p2 where datediff(p1.recordDate,p2.recordDate)=1 and p1.temperature> p2.temperature;