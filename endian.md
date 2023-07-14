Endian è un termine che viene utilizzato nel campo dell'informatica per descrivere l'ordine di memorizzazione dei dati binari in un computer. Si riferisce al modo in cui vengono organizzati i byte di una parola di dati in memoria.

Esistono due tipi principali di endian: il big endian e il little endian. Nel big endian, il byte più significativo (l'ordine di bit più alto) viene memorizzato all'inizio dell'indirizzo di memoria, mentre nel little endian il byte meno significativo (l'ordine di bit più basso) viene memorizzato all'inizio dell'indirizzo di memoria.

Ad esempio, considera il numero binario 0x1234, che richiede due byte per essere rappresentato. Nel big endian, il byte più significativo (0x12) viene memorizzato all'inizio dell'indirizzo di memoria seguito dal byte meno significativo (0x34). Nel little endian, invece, il byte meno significativo (0x34) viene memorizzato all'inizio dell'indirizzo di memoria seguito dal byte più significativo (0x12).

L'ordine endian può influenzare l'interpretazione corretta dei dati binari, ad esempio quando si trasmettono dati tra computer con differenti modalità di endian. È importante tenere conto dell'ordine endian durante lo sviluppo di software e nell'interazione tra sistemi che utilizzano differenti modalità di memorizzazione dei dati.
