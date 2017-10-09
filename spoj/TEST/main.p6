#!/usr/bin/env perl6
use v6;

for lines() {
    exit if $_=="42";
    say $_;
}
