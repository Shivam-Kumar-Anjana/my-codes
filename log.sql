-- Keep a log of any SQL queries you execute as you solve the mystery.
-- crime scene report
select description from crime_scene_reports  where street = "Chamberlin Street" and year = 2020 and day = 28 and month = 7;

--interview of witnesses
select name, transcript from interviews where transcript like ("%courthouse%") and year = 2020 and day = 28 and month = 7;

-- for checking phonecalls
select id, caller, receiver from phone_calls where duration < 60 and year = 2020 and month = 7 and day = 28;

-- finding airport id
select id, abbreviation, full_name from airports where city = "Fiftyville";
select city from airports where id = 4;

-- finding flight details
select id, destination_airport_id from flights where hour = 8 and minute = 20 and origin_airport_id = 8 and year = 2020
and day = 29 and month = 7;

--finding flight passenger info
select passport_number, seat from passengers where flight_id = 36;

--for finding name
select name as SUSPECT from people where phone_number
in(select caller from phone_calls where duration < 60 and year = 2020 and month = 7 and day = 28) and
passport_number in(select passport_number from passengers where flight_id = 36) and
license_plate in(select license_plate from courthouse_security_logs
where year = 2020 and month = 7 and day = 28 and hour = 10 and minute > 15 and minute <25);

select id, name as ACCOMPLICE from people where phone_number
in(select receiver from phone_calls where duration < 60 and year = 2020 and month = 7 and day = 28);

--findings license plate
select id, activity, license_plate from courthouse_security_logs
where year = 2020 and month = 7 and day = 28 and hour = 10 and minute > 15 and minute <25;

--for bank acoount detailes
select account_number, person_id from bank_accounts where person_id in(select id as SUSPECT from people where phone_number
in(select caller from phone_calls where duration < 60 and year = 2020 and month = 7 and day = 28) and
passport_number in(select passport_number from passengers where flight_id = 36) and
license_plate in(select license_plate from courthouse_security_logs
where year = 2020 and month = 7 and day = 28 and hour = 10 and minute > 15 and minute <25));





select id, atm_location, transaction_type from atm_transactions
where account_number = 49610011 and year = 2020 and month = 7 and day = 28;

--name of THIEF
select name from people where id in(select person_id from bank_accounts where person_id in(select id as SUSPECT from people where phone_number
in(select caller from phone_calls where duration < 60 and year = 2020 and month = 7 and day = 28) and
passport_number in(select passport_number from passengers where flight_id = 36) and
license_plate in(select license_plate from courthouse_security_logs
where year = 2020 and month = 7 and day = 28 and hour = 10 and minute > 15 and minute <25)));

--name of accomplice
select name as ACCOMPICE from people where phone_number
in(select receiver from phone_calls phone_calls where duration < 60 and year = 2020 and month = 7
and day = 28 and caller = (select phone_number from people where name = "Ernest" and id = 686048));