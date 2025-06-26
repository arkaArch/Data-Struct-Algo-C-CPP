### Minimum & maxium number of nodes if height is given:
**Height 1**:
```
       O                 O
Min:  /         Max:    / \
     O                 O   O
```
Minimum number of nodes: 2 = 1+1 & maximum number of nodes: 3 = $1 + 2$

**Height 2**:
```
         O                 O
        /                /   \
Min:   O          Max:  O     O
      /                / \   / \
     O                O   O O   O
```
Minimum number of nodes: 3 & maximum number of nodes: 7 = $1 + 2 + 2^2$

So general formula for `minimum-nodes` = (h + 1) and `maximum-nodes` = $(1 + 2 + 2^2 + 2^3 + ... + 2^h)$. <br/> 
This is sum of geometric progression.<br>
And in G.P, $a + ar + a^2 + ar^3 + ... + ar^k = a(r^{k+1}-1)/(r-1)$ <br/>
So, `maximum-nodes` = $2^{h+1} - 1$.

<br/>

---
<br/>

Now from this we can make the opposite formula for `max height` & `min height` if number of nodes are given.<br/>
For `maximum-height` = $n - 1$ <br/>
`minimum-height` = $\log_2(n+1) - 1$

**Number of nodes = 3** : Max-height = 3 - 1 = 2 & min-height = $\log_2(3+1) - 1$ = 2 - 1 = 1
```
                  O                     
                 /                     O
Max height:     O       Min height:   / \  
               /                     O   O
              O
```
