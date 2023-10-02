## Local Development

Make sure you're on Go version 1.20+.

Create a `.env` file in the root of the project with the following contents:

```bash
PORT="8000"
```

Run the server:

```bash
go build -o gocid && ./gocid
```

_This starts the server in non-database mode._ It will serve a simple webpage at `http://localhost:8000`.
