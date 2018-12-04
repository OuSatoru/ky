package main

import (
	"fmt"
)

type Node struct {
	key   int
	value byte
	left  *Node
	right *Node
}

func main() {

}

func insert(node, newnode *Node) {
	if newnode.key < node.key {
		if node.left == nil {
			node.left = newnode
		} else {
			insert(node.left, newnode)
		}
	} else {
		if node.right == nil {
			node.right = newnode
		} else {
			insert(node.right, newnode)
		}
	}
}

func preOrderTraverse(n *Node) {
	if n != nil {
		fmt.Printf("%c ", n.value)
		preOrderTraverse(n.left)
		preOrderTraverse(n.right)
	}
}
