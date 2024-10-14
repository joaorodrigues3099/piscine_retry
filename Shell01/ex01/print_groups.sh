#!/bin/bash
id $FT_USER --groups --name | tr " " "," | tr -d '\n'
