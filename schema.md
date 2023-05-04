```mermaid
graph TD;
    A[Arduino] -->|Digital Output| B[LED Strip];
    A -->|Digital Output| C[Buzzer];
    A -->|Digital Input| D[Push Button];
    B -->|Data| E[Digital Input/Output Board];
    C -->|Data| E;
    D -->|Data| E;
    E -->|USB| F[Computer];
