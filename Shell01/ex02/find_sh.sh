#!/bin/bash
find . -type f -name '*.sh' -execdir basename {} .sh ';'
