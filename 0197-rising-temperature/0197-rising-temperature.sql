# Write your MySQL query statement below

SELECT w.id as id FROM Weather w INNER JOIN Weather v ON DATEDIFF(w.recordDate, v.recordDate)=1
WHERE w.temperature > v.temperature;