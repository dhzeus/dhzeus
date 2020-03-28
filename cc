<?php
include 'acabeca.php';
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" dir="ltr" lang="en">
<head>
  <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js"></script>
  <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jqueryui/1.9.1/jquery-ui.min.js"></script>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <link rel="stylesheet" href="http://www.btnchecker.vip/global/css/bootstrap.min3f0d.css?v2.2.0">
  <link rel="stylesheet" href="http://www.btnchecker.vip/global/css/bootstrap-extend.min3f0d.css?v2.2.0">
  <link rel="stylesheet" href="http://www.btnchecker.vip/assets/css/style.css">
  <link rel='stylesheet' href='http://fonts.googleapis.com/css?family=Roboto:400,400italic,700'>
  <link href="https://maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css" rel="stylesheet" type="text/css" />
  <style type="text/css">
    #listacc{
        width: 60%;
        color: #62a8ea;
        background-color: #f1f4f5;
        border-color: #62a8ea;
    }
    #para{
        width: 10%;
    }
    #bintext{
        color: #00acc1;
        width: 15%;
    }
    #submit{
        width: 10%;
    }
    #limpartext{
        width: 10%;
    }
    #colores{
        color: #00acc1;
    }
  </style>
  <link href="https://maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css" rel="stylesheet" type="text/css" />
  <?php if($user_level > 0) { echo '<script src="ajax/full01.js"></script>'; } else{}?>
  <script type="text/javascript">
    $("#modal_form").modal();
  </script>
</head>
  <body>
        <center>
<div class="modal fade" id="modal_form" role="dialog">
    <div class="modal-dialog modal-lg">

      <!-- Modal content-->
      <div class="modal-content" >
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal">&times;</button>
          <h4 class="modal-title">ATENÇÃO !!!</h4>

        </div>
        <div class="modal-body" id="corpo_modal">
   <div class="view-container ui-corner-all">
        AO INICIAR O TESTE, E NÃO REALIZAR NENHUMA AÇÃO,</p>
        <p>APERTE PAUSAR, FINALIZAR E NOVO TESTE !</p>
        <p>GATE01 DE FULL ESTÁ CODADO EM CIELO !!!</p>
        <p>[AMEX, DINERS, ELO, MASTER E VISA]</p>
        <p>SE TENTAR TESTAR GERADAS EM FULL E VICE-VERSA</p>
        <p>O SISTEMA IRA BANIR AUTOMATICAMENTE E SEM AVISO PRÉVIO !!!</p>
   </div>

        </div>
      </div>
      </div>
</div>
        <div class="alert alert-info alert-dismissible" role="alert">
            <a class="alert-link" id="alerta" href="javascript:void(0)">Separadores disponiveis | , ; : - /</a>
        </div>

    <div class="panel panel-bordered animation-scale-up" style="animation-fill-mode: backwards; animation-duration: 250ms; animation-delay: 50ms;">
    <div class="panel-heading">
        <br><h1><font color="#62a8ea"><i class="fa fa-credit-card"></i> TESTADOR DE FULL 01 (BRL 10 ~ 20) BY BTNChecker</font></h1>
    </div>
    <div class="panel-body">
<form method="post">
  <div align="center">
  <span id="formTestador" style="display:show;">
    <textarea class="form-control" name="listacc" id="listacc" rows="9" placeholder="FORMATO : 4009701319535833|02|2018|361" onkeyup="contalinhas()"></textarea>
</span>
<br />
    <input type="hidden" name="delim" id="delim" value="." size="1" />
    <input type="button" class="btn btn-sm btn-info" value="INICIAR" id="submit" />&nbsp;<input type="button" class = "btn btn-sm btn-danger" value="PAUSAR" id="para" width="10%" />&nbsp;<span id="novoTeste" style="display:none;"><input type="button" class = "btn btn-sm btn-success" value="NOVO TESTE" id="para" width="10%" onclick="refresh('fullgate01');" /></span><span id="finalizarTeste" style="display:none;"><input type="button" class = "btn btn-sm btn-warning" value="FINALIZAR" id="para" width="10%" onclick="finalizarTeste()" /></span><p>
            <div class="loader-wrapper active" id="imgLoad" style="display:none;">
            <div class="loader-wrapper active">
              <div class="loader-layer loader-blue">
                <div class="loader-circle-left">
                  <div class="circle"></div>
                </div>
                <div class="loader-circle-gap"></div>
                <div class="loader-circle-right">
                  <div class="circle"></div>
                </div>
              </div>
              <div class="loader-layer loader-red">
                <div class="loader-circle-left">
                  <div class="circle"></div>
                </div>
                <div class="loader-circle-gap"></div>
                <div class="loader-circle-right">
                  <div class="circle"></div>
                </div>
              </div>
              <div class="loader-layer loader-green">
                <div class="loader-circle-left">
                  <div class="circle"></div>
                </div>
                <div class="loader-circle-gap"></div>
                <div class="loader-circle-right">
                  <div class="circle"></div>
                </div>
              </div>
              <div class="loader-layer loader-yellow">
                <div class="loader-circle-left">
                  <div class="circle"></div>
                </div>
                <div class="loader-circle-gap"></div>
                <div class="loader-circle-right">
                  <div class="circle"></div>
                </div>
              </div>
            </div>
            </div><br />
            <span id="resulttts" style='display: none'><font color="black"> Aprovadas: <span id="aprovada_conta">0</span> - Reprovadas: <span id="reprovada_conta">0</span> - Total: <span id="tudo_conta">0</span></font></span><p>
        <font color="black"><span id="status"></span></font>
  </div>
</form>
    </div>
    </div>
  </center>
</div>
<div id="result" style='display: none'>
<hr />
          <div class="wrap-content container" style="width:90%;">
            <div class="tabbable">
                    <ul id="myTab2" class="nav nav-tabs nav-justified">
                      <li class="active">
                        <a href="#myTab2_example1" data-toggle="tab" aria-expanded="true">
                          APROVADAS
                        </a>
                      </li>
                      <li class="">
                        <a href="#myTab2_example2" data-toggle="tab" aria-expanded="false">
                          REPROVADAS
                        </a>
                      </li>
                    </ul>
                    <div class="tab-content">
                      <div class="tab-pane fade active in" id="myTab2_example1">
                        <p>
                <div class="panel panel-bordered panel-success">
        <table class="table table-hover table-striped">
            <thead>
                <tr>
                    <th style="text-align: center;" width="5%"><font color="#000000">Status</font></th>
                    <th style="text-align: center;" width="30%"><font color="#000000">Número Mês Ano Cvv</font></th>
                    <th style="text-align: center;" width="30%"><font color="#000000">Tipo Nivel Banco País</font></th>
                    <th style="text-align: center;" width="10%"><font color="#000000">Bandeira</font></th>
                    <th style="text-align: center;" width="8%"><font color="#000000">Debitou</font></th>
                    <th style="text-align: center;" width="5%"><font color="#000000">#</font></th>
                </tr>
            </thead>
            <tbody id="aprovads">
            </tbody>
        </table>  
          </div>
                        </p>
                      </div>
                      <div class="tab-pane fade" id="myTab2_example2">
                        <p>
                <div class="panel panel-danger">
                    <table class="table table-hover table-striped">
            <thead>
                <tr>
                    <th style="text-align: center;" width="5%"><font color="#000000">Status</font></th>
                    <th style="text-align: center;" width="30%"><font color="#000000">Número Mês Ano Cvv</font></th>
                    <th style="text-align: center;" width="30%"><font color="#000000">Tipo Nivel Banco País</font></th>
                    <th style="text-align: center;" width="10%"><font color="#000000">Bandeira</font></th>
                    <th style="text-align: center;" width="8%"><font color="#000000">Não Debitou</font></th>
                    <th style="text-align: center;" width="5%"><font color="#000000">#</font></th>
                </tr>
            </thead>
            <tbody id="reprovads">
            </tbody>
        </table>  
          </div>
                        </p>
                      </div>
                    </div>
                  </div>
          </div>
</div>
</body>
</html>
