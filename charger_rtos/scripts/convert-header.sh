 #!/usr/bin/env bash

filename=$1
extension="${filename##*.}"
filename="${filename%.*}"
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

OUTPATH=${DIR}/../inc/icons

convert "${filename}"."${extension}" -compress none "${filename}".jpg
convert "${filename}".jpg -colors 2 -threshold 50% -compress none "${filename}".pbm
$DIR/../drivers/uGFX/tools/file2c/binaries/linux/file2c -dcs "${filename}".pbm "${OUTPATH}"/"${filename}".h
