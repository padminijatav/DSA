# Write your MySQL query statement below
select Customer.name from Customer
left join Customer as ref
on Customer.referee_id=ref.id
where Customer.referee_id!=2
or Customer.referee_id is null;