<?php include_once("polanczenie.php"); ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Document</title>
</head>
    <body>
        <main>
            <h1>Projekt klasy 2CT</h1>

            <ul>
                <?php
                    $zapyanie = $polaczenie->query("SELECT `idu`, `imie`, `nazwisko` FROM  `uczniowie`");
                    while(list($idu,$imie,$nazwisko)=mysqli_fetch_row($zapyanie)){
                    echo("
                        <li>
                            <form action='delete.php' method='post'>
                            $imie $nazwisko
                                <input type='hidden' name='zmk' value=$idu />
                                <input type='submit' value='USUN' />
                            </form>
                        </li>
                    ");
                    }
                ?>
            </ul>
        </main>
    </body>
</html>
<?php $polaczenie->close() ?>