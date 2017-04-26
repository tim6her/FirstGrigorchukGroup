---
title: The First Grigorchuk Group
subtitle: in Context of Burnside's Problems
author: Tim B. Herbstrith
date: 28 April 2017
keywords: [Grigorchuk Group, Burnside's Problems, Group Theory]
description: >
  This talk discusses the first Grigorchuk group in context of
  Burnside's problems
---

# Burnside's Problems


## Periodic Groups

### Definition

A group $G$ is called *periodic* if for each element $a \in G$ there exists an integer $n > 0$ such that
$$a^n = e.$$

. . .

<div fragment="true">
### Examples

 * Every finite group is periodic.
 * The direct sum of cyclic groups
   $$ \bigoplus_{i=2}^\infty \Z_i $$
   is periodic.
</div>

## Bounded Burnside Problem

> A still undecided problem in the theory of discontinuous groups is whether the order of a group may be not finite while the order of every operation it contains is finite.  
> — @burnside1902

. . .

### Common Interpretation

Is every finitely generated, periodic group finite?

<div class="notes">
  Newman points out, that by ‘discontinuous groups’ Burnside either meant specific subgroups of Gl_n(ℂ) or assumed that the groups are finitely generated.
  
  M.F. Newman. ‘A Still Unsettled Question’. In: The Collected Papers of William Burnside. Ed. by P.M. Neumann, A.J. Mann and J.C. Tompson. Vol. I. Oxford University Press on Demand, 2004.
</div>


## Special Case: Abelian Groups

If the group $G$ is assumed to be abelian then the answer to [BBP][Bounded Burnside Problem] is affirmative since
$$ G\cong\Z^n \oplus \Z_{q_1} \oplus \cdots \oplus \Z_{q_t} $$
by the [fundamental theorem of finitely generated abelian groups.](https://en.wikipedia.org/wiki/Finitely_generated_abelian_group#Classification)


## Groups with Exponent

### Definition

If there exists a positive integer $N$, such that
$$a^N = e$$
for all elements $a$ of a group $G$, we say $G$ *is of exponent* $N$.

. . .

<div fragment="true">
### Example

Let $\F_2$ be the field of order $2$. Then the polynomials $\mathbb F_2[X]$ over $\F_2$ form a group of exponent $2$ w. r. t. addition.
</div>


## Unbounded Burnside Problem

> Let $\seq[m]{A}$ be a set of independent operations finite in number, and suppose that they satisfy the system of relations given by
> $$S^n=1$$
> where $n$ is a given integer, while $S$ represents in turn any and every operation which can be generated from the m given operations $A$.
>
> Is the group thus defined one of finite order, and if so what is its order?  
> — @burnside1902


## Special Case: Exponent $2$

If the group is of exponent $2$ then it is abelian since

$$ (ab)(ab) = e = (ab)(ba). $$

The answer to [UBP][Unbounded Burnside Problem] is affirmative by the [fundamental theorem of finitely generated abelian groups.](https://en.wikipedia.org/wiki/Finitely_generated_abelian_group#Classification)



# Graphtheoretical Preliminaries


## Graphs

![A Graph](res/Graph.svg){ height=30% }

A (simple) *graph* is a pair of two sets $(V,E)$, where $V$ is non-empty and $E$ is a subset of all unordered pairs $\lbrace v_1,v_2\rbrace\in\mathcal{P}(V)$ that fulfil $v_1\neq v_2$. The set $V$ is called the *vertex set* and $E$ the *edge set* of the graph $(V,E)$.

<!--
## Walks

![A 4 − 3-Walk](res/Walk.svg){ height=30% }

A *$u-v$-walk* is a finite sequence $(u=v_0,\seq{v}=v)$ in which $\lbrace v_{i-1},v_i\rbrace\in E$ for $1\leq i\leq n$.

<div class="notes">
  dt. »Weg«
</div>


## Paths

![A Path](res/Path.svg){ height=30% }

A *$u-v$-path* is a $u-v$-walk, such that all vertices in the walk except $u$ and $v$ differ pairwise.

<div class="notes">
  dt. »Pfad«
</div>

## Cycles

![A Cycle](res/Cycle.svg){ height=30% }

An $u-u$-path $(u=v_0,\seq{v}=u)$ is called *cycle* if it contains more than $2$ vertices.
-->

## Graph-Automorphisms

![An Automorphism](res/Automorphism.svg){ height=30% }

> * Let $G = (V, E)$ be a graph.
  A mapping $\varphi \colon V \to V$ is called *graph-automorphism* of $G$ if
  $$\lbrace v_1,v_2\rbrace\in E \Leftrightarrow \lbrace \varphi(v_1),\varphi(v_2)\rbrace\in E$$

> * The set $\Aut(G)$ of all automorphisms of $G$ forms a group w. r. t. composition.


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

<div class="notes">
  Note that these subtrees are isomorphic to the full binary tree
</div>

## Levels of $\T$

![Level 2](res/Levels.svg){ height=30% }

 * The vertex $(\seq{b})$ is *on level $n$*.
 * We note $| (\seq{b}) | = n$ and
 $$ \mathrm{L}(k):=\left\lbrace v\in\VT\middle\vert \lvert v\rvert=k\right\rbrace $$


## Automorphisms of $\T$

### Proposition

Let $\varphi\in\AutT$. Then

> * $\varphi$ fixes the root, i. e.,
  $$\varphi(\emptyset) = \emptyset$$
  and
> * $\varphi$ fixes the levels, i. e.,
  $$\lvert \varphi(v)\rvert=\lvert v\rvert,\quad\forall v\in\VT.$$


## Action of $\AutT{}$ on $\mathrm{L}(k)$

![Action on L3](res/ActionOfAutT.svg){ height=30% }

By enumerating the vertices on level $k$ via $\beta_k(\seq[k]{b}) := 1+\sum_{i=1}^{k} b_i2^{k-i},$ one obtains a group-homomorphism

$$ p_k \colon \AutT \to \mathfrak{S}_{2^k}. $$


## Stabiliser Groups

### Definition

The normal subgroup $\St{k}=\ker(p_k)$ of the automorphism group $\AutT$ is called *$k$-th stabiliser group of $\T$*.

. . .

<div fragment="true">
### Remark

$\St{k}$ preserves the first $k + 1$ levels of $\T$ pointwise.
</div>


## Restrictions to Subtrees

### Lemma

The mapping

$$ \psi\colon\St{1}\to\AutT\times\AutT $$

defined by

$$ \varphi\mapsto\left(\varphi\big\vert_{\ST{(0)}},\varphi\big\vert_{\ST{(1)}}\right) $$

is an isomorphism of groups.

---

![Mapping psi](res/Mappingpsi.svg){ height=30% }

$\psi$ identifies an automorphism with its restrictions to $\ST{(0)}$ and $\ST{(1)}$.

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

$c(1, 1, 0, 0) = (1, d(1, 0, 0))$


## Automorphism $c$

$\psi(c) = (a, d)$, $\psi(d) = (\id, b)$

![Automorphism c 2](res/AutomorphismC2.svg){ height=30% }

$c(1, 1, 0, 0) = (1, d(1, 0, 0)) = (1, 1, b(0, 0))$


## Automorphism $c$

$\psi(c) = (a, d)$, $\psi(d) = (\id, b)$ and $\psi(b) = (a, c)$

![Automorphism c 3](res/AutomorphismC3.svg){ height=30% }

$c(1, 1, 0, 0) = (1, d(1, 0, 0)) = (1, 1, b(0, 0)) = (1, 1, 0, a(0))$


## Automorphism $c$

$\psi(c) = (a, d)$, $\psi(d) = (\id, b)$ and $\psi(b) = (a, c)$

![Automorphism c 4](res/AutomorphismC4.svg){ height=30% }

$c(1, 1, 0, 0) = (1, d(1, 0, 0)) = (1, 1, b(0, 0)) = (1, 1, 0, a(0)) = (1, 1, 0, 1)$


## Generators of $\Gamma$

![Generators of Gamma](res/Generators.svg){ height=45% }


## Identities of the Generators

### Proposition

> * The generators are of order $2$, i. e.,
  $$ a^2 = b^2 = c^2 = d^2. $$
> * Three generators suffice since  
  $bc = cb = d, bd = db = c$ and $cd = dc = b$\ 


## Generators of $\Gamma$

![Generators of Gamma](res/Generators.svg){ height=45% }


## Word Length

As a consequence of the proposition, each $\gamma \in \Gamma$ can be written as

$$ \gamma=u_0au_1au_2a\ldots u_lau_{l+1}, $$

where $u_1\ldots u_{l}\in\lbrace b,c,d\rbrace$ and $u_0,u_{l+1}\in\lbrace \id,b,c,d\rbrace.$

. . .

### Notation

The number of generators appearing in the shortest representation of $\gamma$ as a word of the form above is denoted by $\ell(\gamma)$.



# A Counterexample to the Unbounded Burnside Problem


## Stabiliser Groups Revisited

One defines $\St[\Gamma]{k} := \St{k} \cap \Gamma.$

. . .

### Lemma

Let $\gamma=u_0au_1a\ldots u_lau_{l+1}.$
Then $\gamma \in \St[\Gamma]{1}$ iff $l$ is odd.

. . .

![Automorphism a](res/AutomorphismA.svg){ height=30% }

---


### Lemma

Let $\psi\colon\St{1}\to\AutT^2$ be defined as before. Then

$$ \psi(aba) = (c, a), $$
$$ \psi(aca) = (d, a), $$
$$ \psi(ada) = (b, \id). $$

<div class="notes">
  Note that this implies that a /∈ St_Γ(1)
</div>


## $\Gamma$ is Infinite

### Theorem

The mapping $\psi_\mathrm{right}\colon\St[\Gamma]{1}\to\Gamma$, defined by

$$ \psi_\mathrm{right}(\gamma)=\gamma_2 $$

if $\psi(\gamma)=(\gamma_1,\gamma_2)$, is an epimorphism of groups.


## Dihedral Subgroups

### Lemma
$\Gamma$ contains the following subgroups isomorphic to an dihedral group

* $\langle a,d\rangle\cong\D_4$,\label{thm:D4}
* $\langle a,c\rangle\cong\D_8$ and
* $\langle a,b\rangle\cong\D_{16}$.\label{thm:D16}


## $\Gamma$ is periodic

### Theorem

The first Grigorchuk group $\Gamma$ is a $2$-group, i. e., for each automorphism $\gamma\in\Gamma$ there exists a non-negative integer $n$ such that

$$ \gamma^{2^n}=\id. $$


## Proof by Induction on the Length

> * If $\ell(\gamma) = 0$ then $\gamma = \id$.
> * If $\ell(\gamma) = 1$ then $\gamma \in \lbrace a, b, c, d \rbrace$.
> * If $\ell(\gamma) = 2$ then $\gamma ^ {16} = \id$ by the [lemma above](#dihedral-subgroups).

. . .

Hence, one may assume $\ell(\gamma) > 2$ and the claim to be proven for all automorphisms of smaller length.

## Proof – Case 1

If $\ell(\gamma)$ is *odd* then 

* $\gamma = au_1a\ldots u_la$ or
* $\gamma = u_0au_1a\ldots u_lau_{l+1}$\ 

for some $u_0,\ldots u_{l+1}\in\lbrace b,c,d\rbrace$.


## Proof – Case 2

If $\ell(\gamma)$ is *even* then w. l. o. g. one may assume

$$ \gamma = a u_1 a \ldots u_l $${#eq:word}

where $l = \frac{\ell(\gamma)}{2}$ and $\seq[l]{u} \in \lbrace b, c, d \rbrace$.

. . .

### Note

The word in @eq:word does contain $l$ letters ‘$a$’.


## Proof – Case 2.1

If $l$ is *even* then in the word representing $\gamma$ an even number of letters ‘$a$’ is contained. Hence,
$$ \gamma \in \St[\Gamma]{1}. $$

. . .

We have

$$ (\gamma_1, \gamma_2) := \psi(\gamma) = \psi(au_1 a u_2 a\ldots u_l)
   =\psi(au_1 a)\psi(u_2)\ldots\psi(au_{l-1}a)\psi(u_l) $$

and therefore $\ell(\gamma_1), \ell(\gamma_2) \leq l$.


## Proof – Case 2.2

If $l$ is *odd* then $\gamma^2 \in \St[\Gamma]{1}$.

. . .

Therefore,
$$ (\alpha,\beta) := \psi(\gamma^2)=\psi(au_1 a u_2 a\ldots u_lau_1 a u_2 a\ldots u_l)=$$
$$=\psi(au_1 a)\psi(u_2)\ldots\psi(au_{l-2}a)\psi(u_{l-1})\psi(au_l a)\psi(u_1)\ldots\psi(au_{l-1}a)\psi(u_l)$$


## Proof – Case 2.2

>  1. If $\gamma$ contains a ‘$d$’ then $\alpha$ and $\beta$ are at most of length $\ell(\gamma) - 1$.
>  2. If $\gamma$ contains a ‘$c$’ then $\alpha$ and $\beta$ contain a ‘$d$’.
>  3. If neither is the case then $\gamma \in \langle a, b \rangle \cong \D_{16}$.

## As a Consequence, …

the first Grigorchuk group is

> * finitely generated,
> * periodic as well as
> * infinite

. . .

and thus poses a counterexample to the *unbounded Burnside problem.*



# Growth of the First Grigorchuk Group


## Growth of the Orders of Automorphisms

### Definition

The set of all orders of automorphisms of length at most $k$ is denoted
$$ O_k := \lbrace ord(\gamma) \mid \gamma\in\Gamma, \ell(\gamma) \leq k \rbrace $$

. . .

The *growth function* is defined as
$$ o(k) = \max(O_k) $$

. . .

<div fragment="true">
### Remark

Since $O_k \subseteq O_{k + 1}$, the growth function is monotonically increasing.
</div>

<div class="notes">
  There is another important growth function defined on Γ.
  It considers the growth of the set of all *automorphisms* of length smaller or equal to *k* as compared to their orders.
  
  This function yields the *intermediate growth* property Γ is famous for.
</div>


## Upper Bounds for the Growth of $\Gamma$

### Corollary

The growth of $\Gamma$ is bound by an exponential function. More precisely,

$$ o(k)\leq 2^{\frac{1}{2}k+3}. $$

. . .

<div fragment="true">
### Remark

This is far from optimal. @2006math proved that 
$$ o(k)\leq 4k^2+1.$$
</div>


## Restrictions to Subtrees

Recall the enumerating function $\beta_k(\seq[k]{b}) := 1+\sum_{i=1}^{k} b_i2^{k-i}.$

. . .

### Definition

Let $k\geq 1$ be an integer. We define
$$ \psi_k\colon\St[\Gamma]{k}\to\Gamma^{2^k} $$
by
$$ \gamma\mapsto\left(\gamma\big\vert_{\ST{\beta_k^{-1}(1)}},\gamma\big\vert_{\ST{\beta_k^{-1}(2)}},\ldots,\gamma\big\vert_{\ST{\beta_k^{-1}(2^k)}}\right). $$


## Restrictions to Subtrees

### Example

![psi_2 of d](res/psi2.svg){ height=35% }

$$ \psi_2(d) = (\id, \id, a, c) $$


## Restrictions to Subtrees

### Proposition

The mapping $\psi_k\colon\St[\Gamma]{k}\to\Gamma^{2^k}$ is a monomorphism of groups, which satisfies the recursion $\psi_1=\psi\vert_\Gamma$ and

$$\psi_k(\gamma)=
  \underbrace{
    \left((\pi_1\circ\psi_1)(\gamma_1),(\pi_2\circ\psi_1)(\gamma_1),\ldots,(\pi_2\circ\psi_1)(\gamma_{2^{k-1}})\right)
  }_
  {=: \left(\psi_1(\gamma_1),\ldots,\psi_1(\gamma_{2^{k-1}})\right)_k}$$

whenever

$$\psi_{k-1}(\gamma)=(\gamma_1,\gamma_2,\ldots,\gamma_{2^{k-1}})$$

and $\pi_i\colon\Gamma^2\to\Gamma$ denotes the projection defined by $(\alpha_1,\alpha_2)\mapsto\alpha_i$ for $i\in\lbrace 1,2\rbrace$.


## One Technical Lemma

### Lemma

Let $K$ denote the *normal* subgroup of $\Gamma$ generated by $(ab)^2$.

 1. For each integer $k\geq 1$, the image $\psi_k\left(\St[\Gamma]{k}\right)$ contains $K^{2^k}$.
 2. The element $(ab)^8\in K$ is contained in $\St[\Gamma]{4}$. It fulfils  
    $\psi_3((ab)^8)=(b,b,b,b,b,b,b,b)$ and by the previous proposition  
    $\psi_4((ab)^8)=(a,c,a,c,a,c,a,c,a,c,a,c,a,c,a,c).$


## Final Lemma

### Lemma

Let $n$ be a positive integer. Given an automorphism $\gamma\in K$, such that $\ord(\gamma)\geq 2^n$, we find an automorphism $\eta\in K$ satisfying

$$\ord(\eta)\geq 2^{n+1}.$$


## Proof

By the lemma above there exists an automorphism $h\in\St[\Gamma]{5}\subseteq K$, such that

$$\psi_5(h)=(\gamma,\id,\ldots,\id)= ((\gamma,\id),\psi_1(\id),\ldots,\psi_1(\id))_5$$

. . .

We set $\eta:=(ab)^8h$. A short calculation shows

$$ \psi_5\left(\eta^2\right)=(\gamma,\gamma,\id,\ldots,\id)\in\St[\Gamma]{1}^{32}. $$


## Infinite Growth

### Theorem

Let $n$ be a positive integer. There exists an automorphism $\gamma_{n}\in K\subseteq\Gamma$, such that

$$\ord(\gamma)\geq 2^n.$$



# Thank you for your attention


## History and Variants

For a brief exposition on variants and the history of Burnside's problems please visit <https://tim6her.github.io/FirstGrigorchukGroup/history.html>. (German)


## References


