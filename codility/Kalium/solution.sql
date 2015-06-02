-- write your code in SQLite 3.8.6
PRAGMA recursive_triggers = on;

drop table if exists u;
create temp table u (l integer, r integer, unique(l,r));

create temp trigger ttrig
   before insert on u
   when new.l < new.r begin
     insert or ignore into u values (new.l + 1, new.r);
   end;

--insert or ignore into u select * from segments;

select count(distinct l) from u;

