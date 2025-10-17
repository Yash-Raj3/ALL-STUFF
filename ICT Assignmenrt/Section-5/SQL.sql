select e.first_name,e.last_name,e.employee_id,e.department_id,d.department_name
from employees e
inner JOIN departments d
on d.department_id=e.department_id;

select d.department_name,COUNT(e.employee_id) as Number_Of_Employees
from departments d
left join employees e
on e.department_id=d.department_id
group by d.department_name;

select job_title from jobs;

select employee_id,salary,first_name||''||last_name as full_name
from employees
where salary > 5000
order by salary asc;

select d.department_id,d.department_name,d.location_id,l.street_address||','||l.city as Location
from departments d
inner join locations l
on l.location_id = d.location_id;

select min(hire_date)as Earliest_Hire_Date
from employees;

select employee_id,hire_date,first_name||''||last_name as Full_Name
from employees
where hire_date >  DATE '10-01-01';

select round(AVG(salary),2)as Average_Salary 
from employees;

select department_name
from departments;

SELECT 
    e.employee_id,
    e.first_name || ' ' || e.last_name AS full_name,
    j.job_title
FROM employees e
JOIN jobs j
ON e.job_id = j.job_id
WHERE j.job_title = 'Sales Representative';



