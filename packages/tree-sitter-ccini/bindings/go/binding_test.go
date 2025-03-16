package tree_sitter_ccini_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ccini "github.com/cortex-command-community/cortex-command-community-project-vscode-extension/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ccini.Language())
	if language == nil {
		t.Errorf("Error loading CcIni grammar")
	}
}
