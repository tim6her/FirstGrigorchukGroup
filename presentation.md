---
title: The First Grigorchuk Group
subtitle: in Context of Burnside's Problems
author: Tim B. Herbstrith
date: 28 April 2017
---

# Bounded Burnside's Problem


## Periodic Groups

### Definition
A group $G$ is called *periodic* if for each element $a \in G$ there exists an integer $n > 0$ such that
$$a^n = e.$$

. . .

### Examples
 * Every finite group is periodic.
 * The group of bijective mappings from $\N$ onto $\N$ is periodic.


## Groups with Exponent

### Definition
If there exists a positive integer $N$, such that
$$a^N = e$$
for all elements $a$ of a group $G$, we say $G$ *is of exponent* $N$.
. . .

### Example
Let $\F_2$ be the field of order 2. Then the polynomials $\mathbb F_2[X]$ over $\F_2$ form a group of exponent $2$ w. r. t. addition.


## Bounded Burnside Problem
> A still undecided problem in the theory of discontinuous groups is whether the order of a group may be not finite while the order of every operation it contains is finite.  
> — [@burnside1902]

. . .

### Common Interpretation
Is every finitely generated, periodic group finite?


## Special Case: Abelian Groups
If the group $G$ is assumed to be abelian then the answer to [BBP][Bounded Burnside Problem] is affirmative since
$$ G\cong\Z^n \oplus \Z_{q_1} \oplus \cdots \oplus \Z_{q_t} $$
by the [fundamental theorem of finitely generated abelian groups.](https://en.wikipedia.org/wiki/Finitely_generated_abelian_group#Classification)


## Unbounded Burnside Problem
> Let $\seq[m]{A}$ be a set of independent operations finite in number, and suppose that they satisfy the system of relations given by
> $$S^n=1$$
> where $n$ is a given integer, while $S$ represents in turn any and every operation which can be generated from the m given operations $A$.
>
> Is the group thus defined one of finite order, and if so what is its order?  
> — [@burnside1902]


## Special Case: Exponent $2$
If the group is of exponent $2$ then it is abelian since
$$ (ab)(ab) = e = (ab)(ba). $$
The answer to [UBP][Unbounded Burnside Problem] is affirmative by the [fundamental theorem of finitely generated abelian groups.](https://en.wikipedia.org/wiki/Finitely_generated_abelian_group#Classification)



# Graphtheoretical Preliminaries


## Graphs

![A Graph](res/Graph.svg){ height=30% }

A (simple) *graph* is a pair of two sets $(V,E)$, where $V$ is non-empty and $E$ is a subset of all unordered pairs $\lbrace v_1,v_2\rbrace\in\mathcal{P}(V)$ that fulfil $v_1\neq v_2$. The set $V$ is called the *vertex set* and $E$ the *edge set* of the graph $(V,E)$.


## Walks

![A 4 − 3-Walk](res/Walk.svg){ height=30% }

A *$u-v$-walk* is a finite sequence $(u=v_0,\seq{v}=v)$ in which $\lbrace v_{i-1},v_i\rbrace\in E$ for $1\leq i\leq n$.


## Paths

![A Path](res/Path.svg){ height=30% }

A *$u-v$-path* is a $u-v$-walk, such that all vertices in the walk except $u$ and $v$ differ pairwise.


## Cycles

![A Cycle](res/Cycle.svg){ height=30% }

An $u-u$-path $(u=v_0,\seq{v}=u)$ is called *cycle* if it contains more than $2$ vertices.


## Graph-Automorphisms

![An Automorphism](res/Automorphism.svg){ height=30% }

* Let $G = (V, E)$ be a graph.
  A mapping $\varphi \colon V \to V$ is called *graph-automorphism* of $G$ if
  $$\lbrace v_1,v_2\rbrace\in E \Leftrightarrow \lbrace \varphi(v_1),\varphi(v_2)\rbrace\in E$$

. . .

* The set $\Aut(G)$ of all automorphisms of $G$ forms a group w. r. t. composition.


## The Full Binary Tree $\T$

![Binary Tree](res/BinaryTree.svg){ height=30% }

The *full binary tree* is the graph $\T := \left(\VT, \ET\right)$ where
$$ \VT := \lbrace (\seq{b}) \mid \seq{b} \in \lbrace{0, 1\rbrace}, n \geq 0 \rbrace $$
and two vertices are adjacent if the longer sequence can be obtained by concatenating $0$ or $1$ to the shorter sequence.


## The Full Binary Tree $\T$

![Binary Tree with a Path](res/BinaryTreePath.svg){ height=30% }

The red vertex is identified with the sequence $(0, 0, 1, 1)$.


## Subtrees of $\T$

![Subtree](res/Subtree.svg){ height=30%}

The *induced* subgraph of $\T$ containing all sequences that extend $(\seq{b}) \in \T$ is denoted by $\ST{(\seq{b})}$.


## Levels of $\T$

![Level 2](res/Levels.svg){ height=30% }

 * The vertex $(\seq{b})$ is *on level $n$*.
 * We note $| (\seq{b}) | = n$ and
 $$ \mathrm{L}(k):=\left\lbrace v\in\VT\middle\vert \lvert v\rvert=k\right\rbrace $$


## Automorphisms of $\T$

### Theorem
Let $\varphi\in\AutT$. Then

> * $\varphi$ fixes the root, i. e.
  $$\varphi(\emptyset) = \emptyset$$
  and
> * $\varphi$ fixes the levels, i. e.
  $$\lvert \varphi(v)\rvert=\lvert v\rvert,\quad\forall v\in\VT.$$


## Action of $\AutT{}$ on $\mathrm{L}(k)$

![Action on L3](res/ActionOfAutT.svg){ height=30% }

By enumerating the vertices on level $k$ via
$$ \beta_k(\seq[k]{b}) := 1+\sum_{i=1}^{k} b_i2^{k-i}, $$
one obtains a group-homomorphism
$$ p_k \colon \AutT \to \mathfrak{S}_{2^k}. $$

## Stabiliser Groups

### Definition
The normal subgroup $\St{k}=\ker(p_k)$ of the automorphism group $\AutT$ is called *$k$-th stabiliser group of $\T$*.

. . .

### Remark
$\St{k}$ preserves the first $k + 1$ levels of $\T$ pointwise.


---

### Lemma
The mapping
$$ \psi\colon\St{1}\to\AutT\times\AutT $$
defined by
$$ \varphi\mapsto\left(\varphi\big\vert_{\ST{(0)}},\varphi\big\vert_{\ST{(1)}}\right) $$
is an isomorphism of groups.

---

![Mapping psi](res/Mappingpsi.svg){ height=30% }

$\psi$ identifies an automorphism with its action on $\ST{(0)}$ and $\ST{(1)}$.

## First Grigorchuk Group

### Definition

> * One defines the automorphisms $a, b, c$ and $d \in \AutT$ as follows  
  $a(\seq{b}) := (1-b_1, b_2, \ldots, b_n)$ and recursively  
  $b := \psi^{-1}(a, c),$  
  $c := \psi^{-1}(a, d)$ as well as  
  $d := \psi^{-1}(\id, b).$  
> * The *first Grigorchuk group* is defined as
  $$ \Gamma := \langle a, b, c, d \rangle \subseteq \AutT. $$


## Automorphism $c$
$\psi(c) = (a, d)$

![Automorphism c 1](res/AutomorphismC1.svg){ height=30% }

. . .

$a(1, 1, 0, 0) = (1, d(1, 0, 0))$


## Automorphism $c$
$\psi(c) = (a, d)$, $\psi(d) = (\id, b)$

![Automorphism c 2](res/AutomorphismC2.svg){ height=30% }

$a(1, 1, 0, 0) = (1, d(1, 0, 0)) = (1, 1, b(0, 0))$


## Automorphism $c$
$\psi(c) = (a, d)$, $\psi(d) = (\id, b)$ and $\psi(b) = (a, c)$

![Automorphism c 3](res/AutomorphismC3.svg){ height=30% }

$a(1, 1, 0, 0) = (1, d(1, 0, 0)) = (1, 1, b(0, 0)) = (1, 1, 0, a(0))$


## Automorphism $c$
$\psi(c) = (a, d)$, $\psi(d) = (\id, b)$ and $\psi(b) = (a, c)$

![Automorphism c 4](res/AutomorphismC4.svg){ height=30% }

$a(1, 1, 0, 0) = (1, d(1, 0, 0)) = (1, 1, b(0, 0)) = (1, 1, 0, a(0)) = (1, 1, 0, 1)$


## Identities of the Generators

### Theorem
* The generators are of order $2$, i. e.
  $$ a^2 = b^2 = c^2 = d^2. $$

. . .

* Three generators suffice since  
  $ bc = cb = d, bd = db = c$ and $cd = dc = b$

. . .

As a consequence, each $\gamma \in \Gamma$ can be written as

$$ \gamma=u_0au_1au_2a\ldots u_lau_{l+1}, $$

where $u_1\ldots u_{l}\in\lbrace b,c,d\rbrace$ and $u_0,u_{l+1}\in\lbrace \id,b,c,d\rbrace.$



# A Counterexample to the Unbounded Burnside Problem

## Stabiliser Groups Revisited

One defines $\St[\Gamma]{k} := \St{k} \cap \Gamma.$

. . .

### Lemma

Let $\gamma=u_0au_1a\ldots u_lau_{l+1}.$
Then $\gamma \in \St[\Gamma]{1}$ iff $l$ is odd.

. . .

![Automorphism a](res/AutomorphismA.svg){ height=30% }


## Stabiliser Groups Revisited

### Theorem

Let $\psi\colon\St{1}\to\AutT^2$ be defined as before. Then

$$ \psi(aba) = (c, a), $$
$$ \psi(aca) = (d, a), $$
$$ \psi(ada) = (b, \id). $$


## $\Gamma$ is infinite

### Theorem

The mapping $\psi_\mathrm{right}\colon\St[\Gamma]{1}\to\Gamma$, defined by

$$ \psi_\mathrm{right}(\gamma)=\gamma_2 $$

if $\psi(\gamma)=(\gamma_1,\gamma_2)$, is an epimorphism of groups.


## TODO: Überlege dir, wie du den letzten Satz beweist



# Growth of the First Grigorchuk Group



---