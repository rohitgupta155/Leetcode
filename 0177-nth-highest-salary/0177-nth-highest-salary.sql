CREATE FUNCTION getNthHighestSalary(N IN NUMBER) RETURN NUMBER IS
result NUMBER;
salary_count NUMBER;
BEGIN
SELECT COUNT(DISTINCT salary) INTO salary_count FROM Employee;
    IF N > salary_count OR N <= 0 THEN
        RETURN NULL;
    END IF;
select MIN(salary) into result from (select distinct(salary) from Employee Order by salary desc) where ROWNUM<=N ;
RETURN result;
END;

