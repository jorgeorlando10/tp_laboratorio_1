
/** \brief Recibe dos numeros y los suma
 *
 * \param operacion de la suma
 *
 * \return resultado de la suma
 */
float suma(float a, float b)
{
    float suma;
    suma = a + b;
    return suma;
}


/** \brief Recibe dos numeros y los resta
 *
 * \param Operacion de la resta
 *
 * \return Resultado de la resta
 */
float resta(float a, float b)
{
    float resta;
    resta = a - b;
    return resta;
}

/** \brief Recibe dos numeros y los divide
 *
 * \param  Operacion de la division
 *
 * \return Resultado de la Division
 */
float division(float a, float b)
{
    float division;
    division = a / b;
    return division;
}

/** \brief Recibe dos numeros y multiplica
 *
 * \param  Operacion de la multiplicacion
 *
 * \return Resultado de la multiplicacion
 */
float multiplicacion(float a, float b)
{
    float multiplicacion;
    multiplicacion = a * b;
    return multiplicacion;
}

/** \brief Recibe un numero y lo factoriza
 *
 * \param  Operacion de la factorial
 *
 * \return Resultado de la factorial
 */

float factorial(float a)
{
    float resultado;
    if(a == 1)
        return 1;
    resultado = a * factorial (a - 1);
    return resultado;
}

