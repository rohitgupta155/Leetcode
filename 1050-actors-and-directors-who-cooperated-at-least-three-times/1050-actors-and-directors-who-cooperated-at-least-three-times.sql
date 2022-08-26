# Write your MySQL query statement b 
select actor_id,director_id from ActorDirector group by actor_id,director_id having count(*)>2;