gcc -o pat pat.c -O0
gcc -o pattern pattern.c -O0
cat ../Downloads/test.pth pat > pat
cat ../Downloads/test.pth pattern > pattern
./pat&./pattern& 
