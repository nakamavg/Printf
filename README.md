Este código es una implementación simplificada de la función printf de la biblioteca estándar de C. La función printf es una función de formato que escribe una cadena de caracteres formateada a stdout.

La función ft_printf toma una cadena de caracteres s y un número variable de argumentos. La cadena s puede contener especificadores de formato, que son caracteres precedidos por un signo de porcentaje (%). Estos especificadores de formato son reemplazados por los argumentos adicionales en la salida final.

La función ft_printf utiliza una lista de argumentos de longitud variable, que es una característica de C que permite a las funciones tomar un número variable de argumentos. La macro va_start se utiliza para inicializar la lista de argumentos, y va_end se utiliza para limpiar la memoria reservada para esta lista cuando ya no se necesita.

Dentro del bucle while, la función ft_printf recorre la cadena s. Si encuentra un signo de porcentaje (%), llama a la función ft_checks con el siguiente carácter en la cadena y la lista de argumentos. La función ft_checks determina qué función de impresión llamar en función del especificador de formato (el carácter que sigue al signo de porcentaje). Por ejemplo, si el especificador de formato es c, ft_checks llama a la función ft_putchar con el siguiente argumento en la lista.

Si el carácter en la cadena s no es un signo de porcentaje, simplemente se imprime con la función ft_putchar. La longitud de la cadena de salida se acumula en la variable len, que se devuelve al final de la función ft_printf.
