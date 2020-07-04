# math-314-project

1- Abdurrahman alhomaidany  361112479
2- Abdullah Alkhulifi









# Algorithm list

1-Constructing Base b Expansions
procedure base b expansion(n, b: positive integers with b > 1)
q := n
k := 0
while (q ≠ 0)
a[k] := q mod b
q := q div b
k := k + 1
return(a[k-1] ,..., a[1] ,a[0]){(a[k-1] ... a[1]a[0])b is base b expansion of n}

