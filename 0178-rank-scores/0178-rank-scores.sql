/* Write your PL/SQL query statement below */
select score, dense_rank() over (order by score desc) rank from scores;