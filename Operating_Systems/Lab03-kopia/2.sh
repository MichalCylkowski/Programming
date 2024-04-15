#!/bin/bash

user=$(whoami)
current_date=$(date +'%Y-%m-%d')
backup="~/.backups"

mkdir -p "$backup"

find ~/Documents -name "*.txt" -print0 | tar -czvf "${backup}/${user}_backup_${current_date}.tar.gz" --null -T -

echo "Backup został zakończony i umieszczony w katalogu $backup."

