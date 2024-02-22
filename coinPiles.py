t = int(input())
list_of_lines = []
while t>0:
    line = input()
    a=line.split(" ")
    list_of_lines.append(a)
    t-=1
for line in list_of_lines:
    a=int(line[0])
    b=int(line[1])
    if (a+b)%3==0:
        if a>b:
            if 2*b>=a:
                print("YES")
            else:
                print("NO")
        else:
            if 2*a>=b:
                print("YES")
            else:
                print("NO")
    else:
        print("NO")
    