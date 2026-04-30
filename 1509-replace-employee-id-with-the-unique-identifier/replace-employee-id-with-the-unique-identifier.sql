# Write your MySQL query statement below
select Employees.name, EmployeeUNI.unique_id from Employees Left Join EmployeeUNI on Employees.id = EmployeeUNI.id;