SELECT firstName,lastName,city,state FROM
Person LEFT outer  JOIN Address ON
Person.personId=Address.personId;