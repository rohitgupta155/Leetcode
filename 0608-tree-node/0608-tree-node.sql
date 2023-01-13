# Write your MySQL query statement below
select id,case when tree.p_id is NULL then 'Root' when tree.id in (select p_id from tree) then 'Inner' else 'Leaf' end as type from tree;