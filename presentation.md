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
$$ (ab)(ab) = e (ab)(ba). $$
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

## Graph-Automorphism

![An Automorphism](res/Automorphism.svg){ height=30% }

* Let $G = (V, E)$ be a graph.
  A mapping $\varphi \colon V \to V$ is called *graph-automorphism* of $G$ if
  $$\lbrace v_1,v_2\rbrace\in E \Leftrightarrow \lbrace \varphi(v_1),\varphi(v_2)\rbrace\in E$$

. . .

* The set $\aut(G)$ forms a group w. r. t. composition.


## The Full Binary Tree $\T$

![Binary Tree](res/BinaryTree.svg){ height=30% }

The *full binary tree* is the graph $\T := (\VT, \ET)$ where
$$ \VT := \lbrace (\seq{b}) \mid \seq{b} \in \lbrace{0, 1\rbrace}, n \geq 0 \rbrace $$
and two vertices are adjacent if the longer sequence can be obtained by concatenating $0$ or $1$ to the shorter sequence


## The Full Binary Tree $\T$

![Binary Tree with a Path](res/BinaryTreePath.svg){ height=30% }

The red vertex is identified with the sequence $(0, 0, 1, 1)$.


## Subtrees of $\T$

![Subtree](res/Subtree.svg){ height=30%}

The *induced* subgraph of $\T$ containing all sequences that extend $(\seq{b}) \in \T$ is denoted by $\ST{(\seq{b})}$.

---