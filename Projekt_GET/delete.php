<?php 
echo "Tutaj delete.php chopie <br>";
if(isset($_GET['zmk'])){
   
   $idu = $_GET['zmk'];
   include_once("polanczenie.php");
   $zapytanie_delete = $polaczenie->query("DELETE FROM `uczniowie` WHERE idu=$idu");
   if($zapytanie_delete){
      echo "ok";
      header("Location:index.php");
   }else{
      echo "nie ok";
   }

   $polaczanie->close();

}else{
   echo "Brak dostepu";
}



?>










