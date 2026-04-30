# Write your MySQL query statement below
select table1.id from Weather table1 join Weather table2 on Datediff(table1.recordDate , table2.recordDate ) = 1 and table1.temperature > table2.temperature ;