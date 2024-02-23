select id from(
select 
	id, 
	temperature,
    recordDate,
    lag(recordDate) over (order by recordDate) as previous_day_date,
    lag(temperature) over (order by recordDate) as previous_day_temp 
    from Weather
) as t
where t.temperature > t.previous_day_temp
and date_sub(recordDate, interval 1 day) = t.previous_day_date;