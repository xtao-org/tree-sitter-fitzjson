<p align=center>
<img src="https://raw.githubusercontent.com/xtao-org/fitzjson/master/logo2.png" alt="fitzJSON logo" width="160"/>
<h1 align=center>tree-sitter-fitzjson</h1>
</p>

[fitzJSON](https://github.com/xtao-org/fitzjson) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Development

### Building

```
npx tree-sitter generate
npx tree-sitter build-wasm
```

### Parsing

```
npx tree-sitter parse examples/example1.fitz
```

### Highlighting

```
npx tree-sitter highlight examples/example1.fitz
```