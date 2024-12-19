
<html>
<?php
//In this program we use bootstrap template to create a sample website combine with php
//here we are assign the variable which is used below
$i = 1;
$rol = 11221001;
$place = 1;
?>

<head>
    <title>Table</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-9ndCyUaIbzAi2FUVXJi0CjmCapSmO7SnpJef0486qhLnuZ2cdeRhO02iuK6FUUVM" crossorigin="anonymous">
    <style>
        body {
            margin: 20px;
            padding: 100px;
        }

        .alert-heading {
            margin: 2px;
            size: 20px;
        }

        .alert {
            background-color: #a3cfbb;
        }

        p {
            font-weight: bolder;
        }

        card {
            margin-left: 200px;
            align-items: flex-end;
        }
    </style>
</head>

<body>
    <div class="card" style="width: 18rem;">
        <img src="yourcustomimage" class="card-img-top" alt="...">
        <div class="card-body">
            <h5 class="card-title">Hey! I'm Jeromel</h5>
            <p class="card-text">I am this competition conductor. I am so excited to se you all guy's in competition.</p>
            <a href="https://www.linkedin.com/in/jeromel-pushparaj-092a4b253?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BQp3sfCRzS7qwwOvHZSabdQ%3D%3D" class="btn btn-primary">Know me</a>
        </div>
    </div>
    <p>Position Table</p>

    <table class="table table-success table-striped-columns">
        <tr>
            <th>ROLL NO</th>
            <th>PLACED</th>
        </tr>
        <?php
        //here we we use the loop to loop the rows of the table
        for ($i = 1; $i < 15; $i++) {
        ?>
            <tr>
                <td><?= $rol++ ?></td>
                <td><?= $place++ ?></td>
            </tr>
        <?php
        }
        ?>
    </table>
    <table class="table table-dark table-striped" ,href="table" ,style="
    width:10px;
    
    ">


    </table>
    <div class="alert alert-success" role="alert">
        <h4 class="alert-heading">Welcome!</h4>
        <p>Aww yeah, This is just a initial place according to your Roll NO. This will changed according to you scorce while the compettition.</p>
        <hr>

    </div>
    <div class="alert alert-info" role="alert">
        To Enter the competition <a href="#" class="alert-link">Click here</a>.
    </div>
</body>

</html>
