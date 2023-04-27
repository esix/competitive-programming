# Kalium 2015 [⬀](https://codility.com/programmers/challenges/kalium2015)

You are given a table segments with the following structure:

    create table segments (
        l integer not null,
        r integer not null,
        check(l <= r),
        unique(l,r)
    );

Each record in this table represents a contiguous segment of a line, from l to r inclusive. Its length equals r − l.

Consider the parts of a line covered by the segments. Write an SQL query that returns the total length of all the parts of the line covered by the segments specified in the table segments. Please note that any parts of the line that are covered by several overlapping segments should be counted only once.

For example, given:

    l | r
    --+--
    1 | 5
    2 | 3
    4 | 6

your query should return 5, as the segments cover the part of the line from 1 to 6.

Copyright 2009–2015 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.
