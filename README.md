# C++ NodeJS Integration Test
### A test to teach myself how to use GYP as a means of compiling c++ code as a Node accessable module!
Integrates the find and replace method I created initially as an extension of the std namespace into a quickly thrown together html frontend to teach both initializing a module build and further rebuilding and configuring said module :)


## API Reference

#### Find And Replace Text

```http
  GET /findAndReplace
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `input` | `string` | **Required**. This initial message you want to find and replace |
| `find`      | `string` | Text within initial input you want to find |
| `replace`      | `string` | The text you're going to replace your *find* field with|
